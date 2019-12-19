-- type.ada

procedure Simple is
   A, B : integer;
   C : boolean;
   type W is array (0..2) of integer;
   D : W;

   -- procedure nest (x :in integer; y : out integer) is
   procedure Nest is
      B : boolean;
   begin
      null;
      B := A;   -- non-local type mismatch in assignment
   end;

begin
   C := 5;        -- simple type mismatch in assignment
   A := B + C;    -- type mismatch in expression
   C := not A;    -- operand type does not agree w/ operator
   C := (A < B);  -- okay
   A := D(5,4);   -- too many parameters
   A := W(1);     -- w is type not variable
   A := integer;  -- same as above
   A := F;        -- undeclared variable
          -- procedure nest (C, A);  -- first parameter wrong type
          -- procedure nest (10+11, A+1);  -- second parameter cannot be an expression
 end;
