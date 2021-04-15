all: selection insertion

selection:
	gcc selection_sort.c -o selection_sort

insertion:
	gcc insertion_sort.c -o insertion_sort
