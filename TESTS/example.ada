procedure main is 
	a, c : integer;

	procedure nest is
	begin
		null;
	end;

	procedure sibling is
		a, b : integer;
	begin
		c := a;
		nest;
		b := 3;
	end;

begin
	a := 10;
	sibling;
end;
