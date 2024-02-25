typedef struct _Bigfloat{
	char sign;
	unsigned short precision;
	short exp;
	char[] num;
} Bigfloat;
// Form of 1.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx * 2^ exp, num is x array
// sign: 0 +
//       1 -
// precision is x length     
//       

typedef struct _Bigint{
	char sign;
	unsigned short length;
	char[] num;
} Bigint;




