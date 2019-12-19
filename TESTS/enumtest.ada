procedure fool is
	a:integer;
	type day is (MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY);
	b, c: day;

begin
	b := TUESDAY;
	c := WEDNESDAY;
	b := c'LAST;
	c := b'FIRST;
end;
