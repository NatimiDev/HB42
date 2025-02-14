### 💡 Hint-Hint  

#### Exercise 05

There are multiple ways to determine a square root. A very simple approach would work here, but be mindful of **overflow**—multiplying numbers greater than **46,340** can exceed the integer range. Implemented in *ft_sqrt.c*  

An alternative approach is to use the **theorem** that the difference between consecutive square numbers is always an **odd number**. This method helps prevent overflow. Implemented in *ft_sqrt_substr.c*  

For a more advanced solution, you could implement **Newton's method**, but that would likely be overkill for this exercise.
