from conans import ConanFile


class BananaExamplesConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    requires = [
        "boost/1.75.0",
        "openssl/1.1.1k",
        "cpr/1.6.2",
    ]

    generators = "cmake"
