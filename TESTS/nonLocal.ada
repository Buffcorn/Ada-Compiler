procedure Main is             --simpProc.ada
   X : integer;
   procedure Helper is
      A : integer;
      procedure Inside is
      begin
         X := 3;
         A := X + 2;
      end;
   begin
      Inside;
   end;

begin
   Helper;
   X := 5;

end;
