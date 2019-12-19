--AllLoops.ada

procedure main is
   a, b, c:integer;
   type arr is array ( 0 .. 4 ) of integer;
   d : arr;

begin
   loop
      for a in 0 .. 4 loop
         d(a) := 0;
      end loop;

      for a in reverse 0 .. 4 loop
         d(a) := 11;
      end loop;

      while b < c loop
         exit;
         b := 17;
      end loop;

      c := 24;
   end loop;

end;
