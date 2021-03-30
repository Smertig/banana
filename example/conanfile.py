from conans import ConanFile, CMake

class BananaExamplesConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    requires = [
        "boost/1.75.0",
        "cpr/1.5.2",
        "openssl/1.1.1j",
    ]

    generators = "cmake"

    def configure(self):
        if self.settings.os == "Windows":
            self.options["cpr"].with_openssl = False
            self.options["cpr"].with_winssl = True
