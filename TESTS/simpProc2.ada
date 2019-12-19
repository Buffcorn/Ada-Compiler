procedure Main is             --simpProc.ada
   X : integer;
   procedure Helper is
      A : integer;
   begin
      A := 3;

   end;   

procedure Helper2 is
      A : integer;
   begin
      A := 3;

   end;

begin
   Helper;
   X := 5;

end;
