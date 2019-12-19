-- localParm.ada

procedure main is
   a, b : integer;
   procedure inner (x : in out integer; y : in integer) is
      z : integer;
   begin
      x := 2;
      z := 3;
   end;

begin
   inner (a, a + 4);
end;
