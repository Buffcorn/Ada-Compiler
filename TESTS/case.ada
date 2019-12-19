--case.ada

procedure main is
   a, b, c :integer;

begin
   case a is
      when 14 => a := a + 1;
                 b := a;
      when 31 => a := 22;
      when 44 =>
                 case b+2 is
                    when 1 | 2 | 3 | 10 => b := 57;
                    when c |16        => read(b);
                    when others    => write(a);
                 end case;
                 c := 13;
      when 53 => b := 42;
   end case;
   c := 76;
end;

