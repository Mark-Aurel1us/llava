#ifndef PARSER_H
#define PARSER_H


enum expr_types{
	STRING_TERM;// "it's me, \"hello world\""
	INT_TERM;//457, -129
	FLOAT_TERM;//237.90234e7
	
	WORD;//variable_name, functionName
	KEY_WORD;//var,class,function,etc.
	
	DOUBLE_DOT;//:
	COMMA_DOT;//;

	CIRCLE_BRACKETS;//()
	SQUARE_BRACKETS;//[]
	CURLY_BRACKETS;//{}
	
};

typedef struct _Parsetree{
	char* start;
	char* end;
	size_t length;
	Parsetree*[] children;
} Parsetree;

#endif
