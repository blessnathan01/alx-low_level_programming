# Makefile
It defines a set of tasks to be executed. It is used by `make` utility which is used to compile a program from source code or compile a final executable binary. To install make utility use `make install` command. It can contain one or more rules along with phony targets (`.DEFAULT_GOAL`, `all`, and `.PHONY`).

## Rule
It includes target, prerequisites, and recipe. The recipe uses the prerequisites to make a target.

### Rule Syntax
`target: prerequisites
<TAB> recipe`

## Author
- BlessNathan (blessnathan02@gmail.com)
