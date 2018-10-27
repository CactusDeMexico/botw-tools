-------- EventFlow: Npc_Musician_003 --------

Actor: Npc_Musician_003
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Musician_003:Talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}
