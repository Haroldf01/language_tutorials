vec.1 <- c(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15)
vec.2 <- c(1,0,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1)

# if vec.2 is equal to 1 output True
# First using normal if else

# if statement is not vectorized.
# For vectorized if statements you should use ifelse.
# In your case it is sufficient to write

test <- function(a) {
	if(any(vec.2 == a)) {
		print(TRUE)
	} else {
		print(FALSE)
	}
}

test(0)

# print(ifelse(vec.2 == 1, TRUE, FALSE))
print(ifelse(vec.1 > 0, vec.1 , FALSE))
print(ifelse(vec.1 > 0, vec.1 + 5 , FALSE))
