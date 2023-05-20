func <- function(x) {
	switch(
		x,
		"1"="One",
		"F"="fuzzy",
		"5"="int"
	)
}

func("1")
func("F")