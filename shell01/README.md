## 💡 Hint-Hint

- For **exercises 01 and 07**, it is important to subtract the new line using:
  ```sh
  | tr -d '\n'
  ```
- To create a file for **exercise 05** use escape characters
  ```sh
  touch \\\?\$\*\'MaRVin\'\*\$\?\\
  ```
	or simply double quotes
  ```sh
  touch "\?$*'MaRVin'*$?\"
  ```
  *(Note: Btw my cat is called Marvin.)*
- For **exercises 07 and 08**, set the variables `FT_LINE1`, `FT_LINE2`, and `FT_NBR1`, `FT_NBR2` with:
  ```sh
  export FT_LINE1=10
  export FT_LINE2=20
  
  export FT_NBR1=\\\'\?\"\\\"\'\\
  export FT_NBR2=rcrdmddd
  ```
  *(Note: You can modify the values, but ensure special characters are properly escaped!)*

Happy coding!

