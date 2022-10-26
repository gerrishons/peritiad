# Configuration file for the Sphinx documentation builder.

# -- Project information
import os

project = 'Peritia'
copyright = '2022, Scalabli'
author = 'Gerrishon Sirere'

release = '0.1'
version = '2022.1'

# -- General configuration

extensions = [
    'sphinx.ext.duration',
    'sphinx.ext.doctest',
    'sphinx.ext.autodoc',
    'sphinx.ext.autosummary',
    'sphinx.ext.intersphinx',
   # 'secretum_sphinx_theme'
]

intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'sphinx': ('https://www.sphinx-doc.org/en/master/', None),
}
intersphinx_disabled_domains = ['std']

templates_path = ['_templates']

# -- Options for HTML output


html_theme = 'furo' #rtd_sphinx_theme'
html_logo = "resources/logos/peritia-logo.png"


# -- Options for EPUB output
epub_show_urls = 'footnote'
