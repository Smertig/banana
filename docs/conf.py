# Configuration file for the Sphinx documentation builder.
#
# This file only contains a selection of the most common options. For a full
# list see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Path setup --------------------------------------------------------------

# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
# import os
# import sys
# sys.path.insert(0, os.path.abspath('.'))
from datetime import datetime

# -- Project information -----------------------------------------------------

project = 'banana'
copyright = f'2020-{datetime.today().year}'
author = 'Smertig'


# -- General configuration ---------------------------------------------------
import sphinx_book_theme

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    #"sphinx_rtd_theme",
    "sphinx_multiversion",
]

# Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']

html_sidebars = {
    '**': [
        'sidebar-search-bs.html',
        'sbt-sidebar-nav.html',
        #'sbt-sidebar-footer',
        'versioning.html',
    ],
}

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This pattern also affects html_static_path and html_extra_path.
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']


# -- Options for HTML output -------------------------------------------------

# The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#
# TODO: update theme after resolving https://github.com/readthedocs/sphinx_rtd_theme/issues/694
html_theme = 'sphinx_book_theme'

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = ['_static']