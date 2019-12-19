procedure Main is             --simpProc.ada
   X : integer;
   procedure Helper is
      A : integer;
      procedure Inside is
      B : integer;
      begin
         X := 3;
         B := X;
         A := 8;
      end;
   begin
      Inside;
   end;

begin
   Helper;
   X := 5;

end;
