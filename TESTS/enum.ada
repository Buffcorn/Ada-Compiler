--enum.ada

procedure main is
   type color is ( red, orange, yellow, green, blue, purple  );
   c, d, e : color;
   a : integer;

begin
   c := orange;             -- c set to orange (1)
   a := color'pos(blue);    -- a should be set to 4
   d := color'succ(c);      -- d set to yellow (2)
   d := color'succ(yellow); -- d set to green (3)
   e := color'pred(purple); -- e set to blue (4)
   e := color'pred(c);      -- e set to red (0)
   a := color'pos(color'pred(c));  -- a set to 0 (pred of orange is red)
end;

