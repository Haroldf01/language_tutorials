vec.2 <- c(1,0,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1)

seq = 1:10

for (i in seq) {
	message(i)
}

# Month names

for (month in month.name) {
	if(month=="June") break;
	message(month)
}

# Next is same as continue in other porgramming langauges

for (month in month.name) {
	if(month=="June") next;
	message(month)
}

test <- function() {
	for (i in vec.2) {
		if(any(i == 1)) {
			print(TRUE)
		} else {
			print(FALSE)
		}
	}
}

# test()
