#!/usr/bin/python3
def search_replace(my_list, search, replace):
    copy = []
    for k in range(len(my_list)):
        if my_list[k] == search:
            copy.append(replace)
        else:
            copy.append(my_list[k])
    return copy
