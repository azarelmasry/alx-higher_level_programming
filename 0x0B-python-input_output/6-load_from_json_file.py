#!/usr/bin/python3
"""function that loads from a josn file"""

import json


def load_from_json_file(filename):
    """crate and object from a file"""
    with open(filename, 'r', encoding='utf-8') as f:
        return json.load(f)
