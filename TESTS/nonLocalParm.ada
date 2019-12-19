procedure main is         --nonLocalParm.ada
   a, b : integer;

   procedure nest is

      procedure inner (x : in out integer) is
         z : integer;
      begin
         x := 2;
         z := 3;
      end;

   begin
      inner (a);
   end;

begin
   a := 4;
   nest;
end;
