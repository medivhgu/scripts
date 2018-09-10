#!/bin/sh
ctags -I __THROW --file-scope=yes --langmap=c:+.h --langmap=c++:+.h --langmap=c++:+.hpp --languages=c,c++ \
    --links=yes --c-kinds=+px --c++-kinds=+px --fields=+iaS --extra=+q -R \
    -f ~/.vim/systags \
    /usr/include /usr/local/include \
    /opt/ros/kinetic/include

