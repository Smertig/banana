from conans import ConanFile

class BananaExamplesConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    requires = [
        "boost/1.75.0",
        "cpr/1.6.2",
    ]

    generators = "cmake"

    def configure(self):
        pass
