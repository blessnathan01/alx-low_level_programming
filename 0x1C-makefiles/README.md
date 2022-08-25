# Makefile
It defines a set of tasks to be executed. It is used by `make` utility which is used to compile a program from source code or compile a final executable binary. To install make utility use `make install` command. It can contain one or more rules along with phony targets (`.DEFAULT_GOAL`, `all`, and `.PHONY`).

## Phony Targets
If there is multiple targets in a makefile, then the first target is the default target. Use `.DEFAULT_GOAL` to specify a particular target. Use `all` to define or call multiple targets as required. Use `.PHONY` to define all non-file targets.

## Rule
It includes target, prerequisites, and recipe. `Make` utility runs a recipe which uses the prerequisites to make a target.

### Rule Syntax
```
target: prerequisites
<TAB> recipe
```

## Variables, Patterns and Functions
To define a variable inside makefiles, we  use the `=` operator. Variables are referred to as recursive expanded used in rules. For instance,
```
show = echo

say_hi:
	${show} "Hi BlessNathan!"
	$(show) "How are you?"
```

## Author
- BlessNathan (blessnathan02@gmail.com)
