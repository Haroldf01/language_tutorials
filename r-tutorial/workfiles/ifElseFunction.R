# ifelse(expression, True, False)
trueFunc <- function() {
	print('True Function')
}

falseFunc <- function() {
	print('False Function')
}

ifelse(25%%5==0, trueFunc(), falseFunc())
ifelse(25/5==0, TRUE, FALSE)
