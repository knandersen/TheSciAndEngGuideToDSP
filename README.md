# README

Buy the book, it's great!
http://dspguide.com

Disclaimer: Like the book's author, I have not focused on efficiency or speed. My focus has been to re-create and visualize the examples from the book. I find that Jupyter Notebooks, Python and the matplotlib library work great for this.

There might also be a few implementations in C, because I've been learning C for other projects and thought it might be fun. Please trust nothing I write in C :)

# How to use

I use [poetry](https://python-poetry.org) for easy package management. To use the examples:

1. Install poetry, using the documentation on their website.
2. Clone this repo
3. In the root of this repo, in your terminal, type: `poetry install` which will install Jupyter, matplotlib and other packages specified in the `pyproject.toml` file.
4. Run `poetry shell` and start the Jupyter notebooks using `jupyter lab``
5. This should cause a browser window to open, and from there, you can open any of the notebooks