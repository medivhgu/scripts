#!/bin/sh
include_dir=$1
ctags -I __THROW --file-scope=yes --langmap=c:+.h --langmap=c++:+.h --langmap=c++:+.hpp --languages=c,c++ \
    --links=yes --c-kinds=+px --c++-kinds=+px --fields=+iaS --extra=+q -R \
    -f ./.tags \
    $include_dir

