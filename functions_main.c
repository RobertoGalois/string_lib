#include    <stdio.h>

int     ft_strlen(char p_string[])
{
        int count;

        count = 0;
        while (p_string[count] != '\0')
            count++;

        return (count);
}

char*   ft_strcpy(char* p_string2, char* p_string1)
{

         for (unsigned int count = 0; p_string1[count] != '\0'; count++)
            p_string2[count] = p_string1[count];

        return (p_string2);
}

char*   ft_strcat(char* p_string1, char* p_string2)
{
        unsigned int count1;
        unsigned int count2;

        count1 = 0;
        count2 = 0;
        /* recuperation de la position de \0 de p_string1 */
        while (p_string1[count1] != '\0')
            count1++;

        /* copie de p_string2 a la suite de p_string1, \0 inclus */
        while (p_string2[count2] != '\0')
        {
            p_string1[count1] = p_string2[count2];
            count1++;
            count2++;
        }
 
        return (p_string1);
}

int     ft_strcmp(char* p_string1, char* p_string2)
{
        unsigned short bool_continue;
        unsigned int count;

        bool_continue = 1;
        count = 0;
        while (bool_continue == 1)
        {
            if(p_string1[count] != p_string2[count])
                return (1);

            else if (p_string1[count] == '\0' || p_string2[count] == '\0')
                bool_continue = 0;

            count++;
        }

        return (0);
}

int     char_to_int(char p_char)
{
        return ((int)(p_char));
}

char*   ft_strchr(char *p_string, char p_char)
{
        for (int count = 0; p_string[count] != '\0'; count++)
        {
            if (p_string[count] == p_char)
                return &p_string[count];
        }

        return (NULL);
}

int     main(void)
{
        int     nb_friends = 894;
        char    string1[500] = "coucou tout le monde!";

        sprintf(string1, "Je viens vous dire bonjour tous les %d amis !\n", nb_friends);

        printf("%s\n", string1);
        return (0);
}
