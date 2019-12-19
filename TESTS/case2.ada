--case.ada

procedure main is
   a, b, c :integer;

begin
   case a is
        when 1 | 2 | 3  => b := 57;
   end case;
   c := 76;
end;

