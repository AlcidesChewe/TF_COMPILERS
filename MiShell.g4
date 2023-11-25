grammar MiShell;

program: statement;

statement: command
         | if_statement
         | while_statement
         | variable_declaration
         | access_command
         | list_operation
         | set_environment
         | show_environment
         | system_command;

command: COMMAND_NAME parameters;

if_statement: 'if' expression 'then' program ('else' program)? 'endif';

while_statement: 'while' expression 'do' program 'endwhile';

variable_declaration: 'var' VARIABLE_NAME '=' expression;

access_command: '$' COMMAND_NAME;

list_operation: 'list' expression;

set_environment: 'setenv' VARIABLE_NAME '=' expression;

show_environment: 'showenv';

system_command: 'system' STRING;

expression: atom
         | expression '+' expression
         | expression '-' expression
         | expression '*' expression
         | expression '/' expression
         | '(' expression ')';

atom: INT
    | VARIABLE_NAME;
parameters: (expression | STRING)+;

COMMAND_NAME: [a-zA-Z]+;
VARIABLE_NAME: [a-zA-Z]+;

INT: [0-9]+;
STRING: '"' .*? '"';

WS: [ \t\r\n]+ -> skip;
