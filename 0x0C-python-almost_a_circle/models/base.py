#!/usr/bin/python3

"""Base Models"""


class Base:
    """Base Class"""

    __nb_objects = 0

    def __init__(self, id=None) -> None:
        if id:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = self.__nb_objects
