# Patterns, Automata, and Regular Expressions

### Patterns
Set of objects with recognizables properties.

*Examples*: 
- C identifiers: variable or \_count
- Given array of 0's and 1's, there appears a letter formed
	* Recognizing patterns is signifcant part of optical character recognition
- Patterns in programs, such as translating C into Python
- Electronic circuits

### Automata Theory (aka Language Theory)
- Study of abstract model and how they can be used to solve problems.
- Studying and understanding how machines or systems process information and follow rules 
- Helps us understand patterns and develop methods to work with them effectively

* *__Automata__*: a Mathematical model or machine that operates based on a set of rules or instructions. It can be thought of as a system that receives inputs, processes them, and produces outputs accordingly

* **Finite Automata**: Fixed number of states and inputs. Graph-based way of specifying patterns. Two varieties:
	* Deterministic automaton: Machine that can recongize patterns and can be converted straightforward to a program.
	* Non-deterministic automaton: Machine that can be converted to DFA, which recongize patterns as machine, by using “subset construction”. 

* **Regular Expression**: 
	* An algebra for describing patterns the same way automatas can.
	* Can be converted to automata, vice-versa

## State Machines and Automata
- Programs that search for patterns
- These programs have a special structure:
	- States: Positions which we know something particular about the programs progress towards goal.

### Graph Representation of State Machines
- Directed Graph
- States = Nodes
- Transitions: Arcs (state s, state t) represented by condition. 
	- Such as, if the arc is represented by a set of characters $C$, when the automaton is in state s and encounters any character in the set C, it will transition to state t.
	- Example: $x$ is in $C$ and is label of transition. If we arrive at state $s$ and we recieve $x$ as our next char, we say “make a transition on $x$ to state $t$.”
- Accepting States: State where we found acceptable pattern.
- Start State: Origin or source

#### Bounce Filter
In signal processing, the purpose of the bounce filter is to "smooth" the sequence by identifying specific patterns and replacing certain elements with their counterparts. It takes in a input of 0's and 1's and filters based on these conditions:

1. If a 0 is surrounded by 1's (i.e., there is a 1 both before and after the 0), it is considered "noise" and should be removed. In this case, the 0 is replaced by a 1.
2. Conversely, if a 1 is surrounded by 0's, it is also considered "noise" and should be removed. In this case, the 1 is replaced by a 0.


#### Automata vs. Their Programs
- Automata are capable of making accept/reject decisions on sequences of input characters. By traversing from the start state to an accepting state labeled by a specific sequence, the automaton determines whether to accept or reject that sequence

- Programs created from automata utilize the accept/reject decisions in various ways. The program takes advantage of the automaton's decision-making ability to perform specific actions based on the input.

- In other words, Automata are the models for decisions and programs are the applications of those models as tools.


## Deterministic and Nondeterministic Automata
For starters, finite state automata or machines are models that have a fixed number of states and can only be at one at a time. It can tranverse through states on conditions based on rules of the arcs. For example, a light switch has 2 states. Initially, it's start states if OFF. When you flip it, it then goes ON and flipping it again goes OFF. Two nodes connected with a bidirectional arc.


### Deterministic
A DFA is a finite state machine with an accept state. It has the capabilites of taking inputs and accepting or rejecting them. This accept/recision decision making resulting in the "language of the machine". For example, a DFA that only accepts strings that have two consectutive 1s exist will have a language give as:

```math
L_m = {\text{all strings containing } 11}
```

The Automaton here reconginzes this language. It accepts all the strings in the language and rejects those that are not in the language.

The reason why we refer to these as "deterministic" is because for every symbol for an input string read, we will always know what the next state will be. The next state is DETERMINED.

### DFA Traversion
We can simulate a deterministics automata pretty straightforwards:
- For any state $s$,  given the next input char $x$, we consider each of the labels of the transitions out of $s$
- If we find a transisition whose label included $x$, then we traverse to the next proper state it points too
- Else, the automaton dies

### DFA Mathmatical Definition

* DFA are 5 tuples: $DFA(Q, \Sigma, \delta, q_0, F)$
* $Q$ is the set of all states
* $\Sigma$ is the alphabet within the machine.
* $q_0$ is the starting states
* $F$ is the set of accepting states


**Example**:

* DFA are 5 tuples: $DFA(Q, \Sigma, \delta, q_0, F)$
* $Q = {q_0, q_1, q_2}$
* $\Sigma = {0,1}$
* $q_0 = q_0$ 
* $F = {q_2}$


### Nondeterministic

There is no requirement for the labels on the transitions out of a given state in an automaton to be unique or disjoint. In other words, it is possible for an automaton to have multiple transitions out of a single state with the same label. That is, if we start at $s$ and there are transistions from states $t$ and $u$, we are told that must go to both states at once. Because the program cant go two places at once, it's unclear how to simulate an automaton with *nondisjoint* labels on transition out of a state. Solution: "*__subset construction__*"


#### Acceptance by NFA

For an NFA, given a string we could go down many paths. Some might lead to acceptance states and some do not. However if only 1 path is accepted, then this mean the automaton *accepts* the string. Even one accepting path outweighs the several rejected paths.

#### Guess Branches

When at a state where we can move to more than 1 state, the automaton being nondeterministic give us the power to go down make guesses for all paths. We can follow each path until they: hit a dead end and die, or end on an accepting state. 

## From NFA to DFA
In this section we will go over an algorithm for tranforming a nondeterministic automaton to a deterministic automaton.

### Subset Construction (Wringing the Nondeterminism Out of An Automaton)











