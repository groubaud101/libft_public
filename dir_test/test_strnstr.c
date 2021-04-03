#include "test_lib.h"

int		test_strnstr(void)
{
	char	*hay1;
	char	*ndle1;
	char	*hay2;
	char	*ndle2;
	size_t	n;

	n = 30;
	hay1 = strdup("coucou ca va les amis ?");
	ndle1 = strdup("cou ");
	hay2 = strdup("coucou ca va les amis ?");
	ndle2 = strdup("cou ");
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 30;
	hay1 = strdup("coucou ca va les amis ?");
	ndle1 = strdup("  ");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
		
	n = 30;
	hay1 = strdup("coucou ca va les amis ?");
	ndle1 = strdup("a");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));

	n = 30;
	hay1 = strdup("coucou ca va les amis ?");
	ndle1 = strdup("v");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 30;
	hay1 = strdup("coucou ca va les amis ?");
	ndle1 = strdup("\0");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 30;
	hay1 = strdup("coucou ca va les amis ?");
	ndle1 = strdup("");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 30;
	hay1 = strdup("");
	ndle1 = strdup("");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 30;
	hay1 = strdup("");
	ndle1 = strdup("coucou");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 30;
	hay1 = strdup("");
	ndle1 = strdup("c");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));
	
	n = 5;
	hay1 = strdup("coucou les amis ca va ?");
	ndle1 = strdup("cou ");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |(null)|\nft_strnstr : |%s|\n",
			hay1, ndle1, ft_strnstr(hay2, ndle2, n));
	
	n = 6;
	hay1 = strdup("coucou les amis ca va ?");
	ndle1 = strdup("cou ");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |(null)|\nft_strnstr : |%s|\n",
			hay1, ndle1, ft_strnstr(hay2, ndle2, n));
	
	n = 7;
	hay1 = strdup("coucou les amis ca va ?");
	ndle1 = strdup("cou ");
	hay2 = strdup(hay1);
	ndle2 = strdup(ndle1);
	printf("\nhaystack : |%s|\nneedle : |%s|\n   str str : |%s|\nft_strnstr : |%s|\n",
			hay1, ndle1, strstr(hay1, ndle1), ft_strnstr(hay2, ndle2, n));

	return (1);
}