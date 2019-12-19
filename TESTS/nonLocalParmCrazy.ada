procedure main is         --nonLocalParmCrazy.ada
a, b : integer;

   procedure nest is
   b : integer;
      procedure inner (x : in out integer; y : out integer;  q : in integer) is
      z : integer;
      begin
         x := 2;
         y := 5;
         z := 3;
         a := b;
      end;

   begin
      inner (a, b, 7);
   end;

begin
   nest;
end;
