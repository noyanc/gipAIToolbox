#ifndef AITOOLBOX_H
#define AITOOLBOX_H

#include "AIToolbox/EpsilonPolicyInterface.hpp"

#include "AIToolbox/PolicyInterface.hpp"

#include "AIToolbox/Types.hpp"


// Utils

#include "AIToolbox/Utils/Adam.hpp"
#include "AIToolbox/Utils/Combinatorics.hpp"
#include "AIToolbox/Utils/Core.hpp"
#include "AIToolbox/Utils/IndexMap.hpp"
#include "AIToolbox/Utils/LP.hpp"
#include "AIToolbox/Utils/Polytope.hpp"
#include "AIToolbox/Utils/Probability.hpp"
#include "AIToolbox/Utils/Prune.hpp"
#include "AIToolbox/Utils/StorageEigen.hpp"
#include "AIToolbox/Utils/TypeTraits.hpp"

// Tools

#include "AIToolbox/Tools/Statistics.hpp"

// POMDP

#include "AIToolbox/POMDP/Algorithms/Utils/BeliefGenerator.hpp"
#include "AIToolbox/POMDP/Algorithms/Utils/Projecter.hpp"
#include "AIToolbox/POMDP/Algorithms/Utils/rPOMCPGraph.hpp"
#include "AIToolbox/POMDP/Algorithms/Utils/Types.hpp"
#include "AIToolbox/POMDP/Algorithms/AMDP.hpp"
#include "AIToolbox/POMDP/Algorithms/BlindStrategies.hpp"
#include "AIToolbox/POMDP/Algorithms/FastInformedBound.hpp"
#include "AIToolbox/POMDP/Algorithms/GapMin.hpp"
#include "AIToolbox/POMDP/Algorithms/IncrementalPruning.hpp"
#include "AIToolbox/POMDP/Algorithms/LinearSupport.hpp"
#include "AIToolbox/POMDP/Algorithms/PBVI.hpp"
#include "AIToolbox/POMDP/Algorithms/PERSEUS.hpp"
#include "AIToolbox/POMDP/Algorithms/POMCP.hpp"
#include "AIToolbox/POMDP/Algorithms/QMDP.hpp"
#include "AIToolbox/POMDP/Algorithms/rPOMCP.hpp"
#include "AIToolbox/POMDP/Algorithms/RTBSS.hpp"
#include "AIToolbox/POMDP/Algorithms/SARSOP.hpp"
#include "AIToolbox/POMDP/Algorithms/Witness.hpp"
//#include "AIToolbox/POMDP/Environments/ChengD35.hpp"
//#include "AIToolbox/POMDP/Environments/EJS4.hpp"
#include "AIToolbox/POMDP/Environments/TigerProblem.hpp"
#include "AIToolbox/POMDP/Policies/Policy.hpp"
#include "AIToolbox/POMDP/IO.hpp"
#include "AIToolbox/POMDP/Model.hpp"
#include "AIToolbox/POMDP/SparseModel.hpp"
#include "AIToolbox/POMDP/Types.hpp"
#include "AIToolbox/POMDP/TypeTraits.hpp"
#include "AIToolbox/POMDP/Utils.hpp"

// MDP

#include "AIToolbox/MDP/Algorithms/Utils/OffPolicyTemplate.hpp"
#include "AIToolbox/MDP/Algorithms/Utils/PolicyEvaluation.hpp"
#include "AIToolbox/MDP/Algorithms/Utils/Rollout.hpp"
#include "AIToolbox/MDP/Algorithms/DoubleQLearning.hpp"
#include "AIToolbox/MDP/Algorithms/Dyna2.hpp"
#include "AIToolbox/MDP/Algorithms/DynaQ.hpp"
#include "AIToolbox/MDP/Algorithms/ExpectedSARSA.hpp"
#include "AIToolbox/MDP/Algorithms/HystereticQLearning.hpp"
#include "AIToolbox/MDP/Algorithms/ImportanceSampling.hpp"
#include "AIToolbox/MDP/Algorithms/LinearProgramming.hpp"
#include "AIToolbox/MDP/Algorithms/MCTS.hpp"
#include "AIToolbox/MDP/Algorithms/PolicyIteration.hpp"
#include "AIToolbox/MDP/Algorithms/PrioritizedSweeping.hpp"
#include "AIToolbox/MDP/Algorithms/QL.hpp"
#include "AIToolbox/MDP/Algorithms/QLearning.hpp"
#include "AIToolbox/MDP/Algorithms/RetraceL.hpp"
#include "AIToolbox/MDP/Algorithms/RLearning.hpp"
#include "AIToolbox/MDP/Algorithms/SARSA.hpp"
#include "AIToolbox/MDP/Algorithms/SARSAL.hpp"
#include "AIToolbox/MDP/Algorithms/TreeBackupL.hpp"
#include "AIToolbox/MDP/Algorithms/ValueIteration.hpp"
#include "AIToolbox/MDP/Environments/Utils/GridWorld.hpp"
#include "AIToolbox/MDP/Environments/CliffProblem.hpp"
#include "AIToolbox/MDP/Environments/CornerProblem.hpp"
#include "AIToolbox/MDP/Policies/BanditPolicyAdaptor.hpp"
#include "AIToolbox/MDP/Policies/EpsilonPolicy.hpp"
#include "AIToolbox/MDP/Policies/PGAAPPPolicy.hpp"
#include "AIToolbox/MDP/Policies/Policy.hpp"
#include "AIToolbox/MDP/Policies/PolicyInterface.hpp"
#include "AIToolbox/MDP/Policies/PolicyWrapper.hpp"
#include "AIToolbox/MDP/Policies/QGreedyPolicy.hpp"
#include "AIToolbox/MDP/Policies/QPolicyInterface.hpp"
#include "AIToolbox/MDP/Policies/QSoftmaxPolicy.hpp"
#include "AIToolbox/MDP/Policies/RandomPolicy.hpp"
#include "AIToolbox/MDP/Policies/WoLFPolicy.hpp"
#include "AIToolbox/MDP/Experience.hpp"
#include "AIToolbox/MDP/IO.hpp"
#include "AIToolbox/MDP/MaximumLikelihoodModel.hpp"
#include "AIToolbox/MDP/Model.hpp"
#include "AIToolbox/MDP/SparseExperience.hpp"
#include "AIToolbox/MDP/SparseMaximumLikelihoodModel.hpp"
#include "AIToolbox/MDP/SparseModel.hpp"
#include "AIToolbox/MDP/ThompsonModel.hpp"
#include "AIToolbox/MDP/Types.hpp"
#include "AIToolbox/MDP/TypeTraits.hpp"
#include "AIToolbox/MDP/Utils.hpp"

//Impl

#include "AIToolbox/Impl/CassandraParser.hpp"
#include "AIToolbox/Impl/FunctionMatching.hpp"
#include "AIToolbox/Impl/Logging.hpp"
#include "AIToolbox/Impl/Seeder.hpp"

//Factored

//#include "AIToolbox/Factored/Bandit/Algorithms/Utils/GraphUtils.hpp"
//#include "AIToolbox/Factored/Bandit/Algorithms/Utils/LacoalSearch.hpp"
#include "AIToolbox/Factored/Bandit/Algorithms/Utils/MaxPlus.hpp"
#include "AIToolbox/Factored/Bandit/Algorithms/Utils/MultiObjectiveVariableElimination.hpp"
//#include "AIToolbox/Factored/Bandit/Algorithms/Utils/ReusingIterativeLocalSearch.hpp"
#include "AIToolbox/Factored/Bandit/Algorithms/Utils/UCVE.hpp"
#include "AIToolbox/Factored/Bandit/Algorithms/Utils/VariableElimination.hpp"
//#include "AIToolbox/Factored/Bandit/Enviroments/MiningProblem.hpp"
#include "AIToolbox/Factored/Bandit/Policies/EpsilonPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Policies/LLRPolicy.hpp"
//#include "AIToolbox/Factored/Bandit/Policies/MARMaxPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Policies/MAUCEPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Policies/PolicyInterface.hpp"
#include "AIToolbox/Factored/Bandit/Policies/QGreedyPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Policies/RandomPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Policies/SingleActionPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Policies/ThompsonSamplingPolicy.hpp"
#include "AIToolbox/Factored/Bandit/Experience.hpp"
#include "AIToolbox/Factored/Bandit/FlattenedModel.hpp"
#include "AIToolbox/Factored/Bandit/Model.hpp"
#include "AIToolbox/Factored/Bandit/Types.hpp"
//#include "AIToolbox/Factored/Bandit/TypeTraits.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/Utils/CPSQueue.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/Utils/FactoredLP.hpp"
//#include "AIToolbox/Factored/MDP/Algorithms/Utils/GraphUtils.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/CooperativePrioritizedSweeping.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/CooperativeQLearning.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/JointActionLearner.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/LinearProgramming.hpp"
#include "AIToolbox/Factored/MDP/Algorithms/SparseCooperativeQLearning.hpp"
#include "AIToolbox/Factored/MDP/Environments/SysAdmin.hpp"
#include "AIToolbox/Factored/MDP/Environments/TigerAntelope.hpp"
#include "AIToolbox/Factored/MDP/Policies/BanditPolicyAdaptor.hpp"
#include "AIToolbox/Factored/MDP/Policies/EpsilonPolicy.hpp"
#include "AIToolbox/Factored/MDP/Policies/QGreedyPolicy.hpp"
#include "AIToolbox/Factored/MDP/CooperativeExperience.hpp"
#include "AIToolbox/Factored/MDP/CooperativeMaximumLikelihoodModel.hpp"
#include "AIToolbox/Factored/MDP/CooperativeModel.hpp"
#include "AIToolbox/Factored/MDP/CooperativeThompsonModel.hpp"
#include "AIToolbox/Factored/MDP/Types.hpp"
//#include "AIToolbox/Factored/MDP/TypeTraits.hpp"
#include "AIToolbox/Factored/MDP/Utils.hpp"
//#include "AIToolbox/Factored/Utils/APSP.hpp"
#include "AIToolbox/Factored/Utils/BayesianNetwork.hpp"
#include "AIToolbox/Factored/Utils/Core.hpp"
#include "AIToolbox/Factored/Utils/FactoredMatrix.hpp"
#include "AIToolbox/Factored/Utils/FactorGraph.hpp"
#include "AIToolbox/Factored/Utils/FasterTrie.hpp"
#include "AIToolbox/Factored/Utils/FilterMap.hpp"
#include "AIToolbox/Factored/Utils/GenericVariableElimination.hpp"
#include "AIToolbox/Factored/Utils/Trie.hpp"
#include "AIToolbox/Factored/Types.hpp"

//Bandit

#include "AIToolbox/Bandit/Policies/Utils/QGreedyPolicyWrapper.hpp"
#include "AIToolbox/Bandit/Policies/Utils/QSoftmaxPolicyWrapper.hpp"
#include "AIToolbox/Bandit/Policies/EpsilonPolicy.hpp"
#include "AIToolbox/Bandit/Policies/ESRLPolicy.hpp"
#include "AIToolbox/Bandit/Policies/LRPPolicy.hpp"
#include "AIToolbox/Bandit/Policies/PolicyInterface.hpp"
#include "AIToolbox/Bandit/Policies/QGreedyPolicy.hpp"
#include "AIToolbox/Bandit/Policies/QSoftmaxPolicy.hpp"
#include "AIToolbox/Bandit/Policies/RandomPolicy.hpp"
//#include "AIToolbox/Bandit/Policies/SuccessiveRejectsPolicy.hpp"
//#include "AIToolbox/Bandit/Policies/T3CPolicy.hpp"
#include "AIToolbox/Bandit/Policies/ThompsonSamplingPolicy.hpp"
//#include "AIToolbox/Bandit/Policies/TopTwoThompsonSamplingPolicy.hpp"
#include "AIToolbox/Bandit/Experience.hpp"
#include "AIToolbox/Bandit/Model.hpp"
#include "AIToolbox/Bandit/Types.hpp"


#endif
