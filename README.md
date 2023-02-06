<img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" align="right" height="65">
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" align="right" height="55">

# Get Next Line
This is my get_next_line.

## Functions

<details>

<summary>

## **ft_memcpy**

</summary>

```C

void	*ft_memcpy(void *dst, const void *src, size_t len);

```

### Description

> **memcpy()** function copies n bytes from memory area **src** to memory area **dst**.

### Return value

> Returns the amount of characters copied.

</details>

<details>

<summary>

## **ft_strcpy**

</summary>

```C

int	ft_strcpy(char *dst, char *src);

```

### Description

> **ft_strcpy()** copies the string **src** into the string **dst**.

### Return value

> Returns the amount of characters copied.

</details>

<details>

<summary>

## **ft_strchr**

</summary>

```C

char	*ft_strchr(char *s, char c);

```

### Description

> **ft_strchr()** search the first occurrence of the character **c** in the string **s**.

### Return value

> Returns the first occurrence of the character **c** in the string **s** or 0 if there's no ocurrence.

</details>

<details>

<summary>

## **ft_get_aux**

</summary>

```C

char	*ft_get_aux(int fd);

```

### Description

  > **ft_get_aux()** tryes to gets from a list the struct corresponding to the entered fd.

### Return value

> Returns the struct that corresponds to the entered fd or returns **NULL** on falure.

</details>

<details>

<summary>

## **ft_buffprocesor**

</summary>

```C

static int	ft_buffprocesor(int fd, char *str);

```

### Description

> **ft_buffprocesor()** attempts to read up to **BUFFER_SIZE** characters from a file descriptor **fd** into **str** and, if there is any **'\n'**, saves the extra string into an **aux** array. If the **aux** array has a value while calling the function it will do the same but taking the buffer from the **aux** array instead the file.

### Return value

> Returns the amount of characters on the **string** not including the ones on the **aux** variable.

</details>

<details>

<summary>

## **ft_createstr**

</summary>

```C

static char	*ft_createstr(int len);

```

### Description

  > **ft_createstr()** tries to create a string of the size **len**.

### Return value

> Returns an empty string of size **en** or, on failure, returns 0.

</details>

<details>

<summary>

## **ft_assembler**

</summary>

```C

char	*ft_assembler(int fd);

```

### Description

  > **ft_assembler()** function attempts read the necesary characters from the file descriptor **fd** and returns them as a new string, saving the characters after the **'\n'** on a list with a struct for each **file descriptor**.
  <br><br>It doesent check if the **BUFFER_SIZE** is > to 0 and **fd** >= 0;

### Return value

> Returns the next line of the chosen file descriptor as a new string.

</details>

<details>

<summary>

## **get_next_line**

</summary>

```C

char	*get_next_line(int fd);

```

### Description

  > **get_next_line()** function attempts read the necesary characters from the file descriptor **fd** and returns them as a new string, saving the characters after the **'\n'** on a list with a struct for each **file descriptor**.

### Return value

> Returns the next line of the chosen file descriptor as a new string.

</details>