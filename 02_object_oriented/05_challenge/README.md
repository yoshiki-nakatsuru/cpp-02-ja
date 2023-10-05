# Challenge 5: Putting It All Together

1. Create classes for `School`, `Teacher`, and `Student`. These classes should be properly split into header and source files.
2. A `Teacher` can have multiple `Student`s, and a `Student` can have multiple `Teacher`s (many-to-many association).
3. A `School` should manage its `Teacher`s and `Student`s (aggregation).
4. Implement the following methods within the `School` class: `enrollStudent` for enrolling `Student`s, `hireTeacher` for hiring `Teacher`s, and `assignStudent` for assigning a `Student` to a `Teacher`.
5. Demonstrate this code works by making a `School` object, hire a `Teacher`, enroll some `Student`s, then assign these `Student`s to the `Teacher`.
