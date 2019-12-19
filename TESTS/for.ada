--for.ada

procedure main is
   a, b, c:integer;
   d : integer;

begin
  for b in 1 .. 7 loop
      for a in 0 .. 4 loop
         d := 110;
      end loop;

      for a in reverse 0 .. 4 loop
         c := 11;
      end loop;

      while b < c loop
         exit;
         b := 17;
      end loop;

      c := 24;
   end loop;

end;
