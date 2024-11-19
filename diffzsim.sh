#! /bin/bash

diff -riEZbwBd --color=always -q  ./zsim ../zsim > zsim.diff
diff -riEZbwBd --color=always  ./zsim ../zsim > zsim.diff.ansi
  