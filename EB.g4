grammar EB;

// Reglas lexicas
INT:   '0' | [1-9] [0-9]*;
ID:    [a-zA-Z]+;

// Operadores
PLUS:  '+';
MINUS: '-';
MULT:  '*';
DIV:   '/';

// Comparadores
EQ:    '==';
NEQ:   '!=';
LT:    '<';
LE:    '<=';
GT:    '>';
GE:    '>=';

// Palabras clave
IF:    'if';
THEN:  'then';
ELSE:  'else';
ENDIF: 'endif';

// Reglas sintacticas
program: statement+;

statement: assignment | ifStatement;

assignment: ID '=' expr ';';

ifStatement: IF condition THEN statement+ (ELSE statement+)? ENDIF;

condition: expr (EQ | NEQ | LT | LE | GT | GE) expr;

expr: INT | ID | expr (PLUS | MINUS | MULT | DIV) expr;

// Ignorar espacios en blanco y saltos de línea
WS: [ \t\r\n]+ -> skip;
