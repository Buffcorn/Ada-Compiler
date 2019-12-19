-- ptr.ada
procedure main is
   b      : integer;
   type PType is access integer;
   a : PType;
   c : PType;

begin
   a := null;
   a := new integer;  --allocate space for a
   c := a;       -- c now points to the same location as a
   a.all := 18;  -- a.all in Ada is the same as a* in C
   b := a.all;
   a := new integer;
   c := new integer;
   a := new integer;

end;
