# minishell
https://cdn.intra.42.fr/pdf/pdf/58866/fr.subject.pdf

# TODO

1. fix ft_splitb
	- with last enclosed if is not enclosed

## first command to parse / exec

1. should work
	- `cat -e "file.txt"`
	- `ca't' -e "file.txt"`
	- `cat -e "file".txt`
	- `cat -e "file".'txt'`
2. shouldn't work
	- `ca't -e' "file.txt"`

# TIPS

## valgrind
> without vsupp work fine
`valgrind --leak-check=full <exec_path>`

> with vsupp suppress ALL leak linked to readline ...
`valgrind --leak-check=full --suppressions=vsupp <exec_path>`

## exec with log
`./minishell 3>exec.log; cat exec.log`

## PIPE
[PIPE](https://youtu.be/ceNaZzEoUhk?t=1576)

## AST
1. https://github.com/pmouhali/minishell_ast
	- https://ruslanspivak.com/lsbasi-part7/
	- https://unix.stackexchange.com/questions/88850/precedence-of-the-shell-logical-operators
1. https://github.com/AudeizReading/minishell/wiki/01-PARSING
