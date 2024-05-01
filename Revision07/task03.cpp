if ((x1 < 1 || y1 < 1 || x2 < 1 || y2 < 1 ||
	x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8) ||
	((x1 == x2) && (y1 == y2))) {
	return false;
}
return abs(x1 - x2) == 2 && abs(y1 - y2) == 1 || abs(x1 - x2) == 1 && abs(y1 - y2) == 2;