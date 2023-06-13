#!/usr/bin/python3
"""Defines a file writiong function."""


def to_json_string(my_obj):
    """Write a string to a UTF8 text file.
    Args:
        filename (str): The name of the file to write
        text (str): The text to write to the file.
    returns:
        The number of characterswritten.
    """
    with open(filename, "w", encoding="utf-8") as f:
        return f.write(text)
