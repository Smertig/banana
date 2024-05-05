#pragma once

#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <tuple>
#include <utility>

inline std::tuple<std::string, std::string, std::string, std::string> parse_input_or_fail(int argc, const char** argv) {
    auto token = argc > 1 ? argv[1] : std::getenv("BANANA_BOT_TOKEN");
    auto target = argc > 2 ? argv[2] : std::getenv("BANANA_EXAMPLE_TARGET");
    if (token == nullptr && target == nullptr) {
        std::cout << "usage: " << (argc > 0 ? argv[0] : "./self") << " token target [name] [context]\n";
        std::exit(2);
    }

    auto extract_file_name = [](std::string_view path) {
        if (path.ends_with(".exe")) path.remove_suffix(4);

        const auto slash_pos = path.find_last_of("/\\");
        if (slash_pos != std::string_view::npos) path = path.substr(slash_pos + 1);
        return path;
    };

    const auto example_name = std::string(argc > 3 ? argv[3] : argc > 0 ? extract_file_name(argv[0]) : "<unknown>");
    const auto context = argc > 4 ? argv[4] : std::getenv("BANANA_EXAMPLE_CONTEXT");

    auto message_text = "Hello from " + example_name;
    if (context) {
        message_text += " at ";
        message_text += context;
    }
    message_text += "!";

    // Hack to make sure each example has 1 second delay before calling telegram API
    std::this_thread::sleep_for(std::chrono::seconds(1));

    return { token, target, std::move(example_name), std::move(message_text) };
}
