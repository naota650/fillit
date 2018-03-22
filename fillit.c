#include "libft.h"
#include "fillit.h"
//opens file and copies into a list
t_list	*read_tetris(int fd)
{
	char *temp;
	int i;
	char value;
	t_list	*list;
	t_etris *tetris;

	list = NULL;
	value = 'A';
	temp = ft_strnew(21);
	while ((i = read(fd, temp, 21)) >= 20)
	{
		if ((tetris = get_piece(temp, value++)) == NULL)
		{
			ft_memdel((void**)&temp);
			return (free_list(list));
		}
		ft_lstadd(&list, ft_lstnew(tetris, sizeof(t_etris)));
		ft_memdel((void**)&temp);
	}
	if (i != 0)
		return (free_list(list));
	return (list);
}

t_etris	*get_piece(char *str, char value)
{

	t_etris *tetris;

	return (tetris);
}

t_map *create_map()
{
	//create blank map based on number of tetriminos read
}

void	*put_tetris(t_etris *tetris, t_list list)
{
	//puts tetris structure onto a map
	//calls solve()
	//calls create map
}

void	solve()
{
	//checks for top left corner of map
	//checks 2D array for valid squares (ie check for . vs #)
	//validate open position in top left (function), constantly shifts position
	//puts tetris on available position in top left
	//checks of tetris fits in map, creates new bigger map if not

}

t_point	validate_point(t_point x, t_point y) // 0, 0 on first call
{
	//check alligned squares
	//if needed changed x and y for t_point

}
void	print_map(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

t_list	*free_list(t_list *list)
{
	t_list	*next;
	t_etris	*tetris;

	while (list)
	{
		tetris = (t_etris*)list->content;
		next = list->next;
		ft_memdel((void**)&list);
		list = next;
	}
	return (NULL);
}

t_etris		tetris_new(char **pos, int width, int height, char value)
{
	t_etris *tetris;
	tetris->pos = pos;
	tetris->width = width;
	tetris->height = height;
	tetris->value = value;
	return (tetris);
}