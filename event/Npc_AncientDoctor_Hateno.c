-------- EventFlow: Npc_AncientDoctor_Hateno --------

Actor: Npc_AncientDoctor_Hateno
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckTimeType', 'CheckPlayerState', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk12', 'IsOverWriteLabelActorName': False})
        Event36:
        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk08', 'IsOverWriteLabelActorName': False})
        Event40:
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call HatenoMini_BlueFire.Explain_Roberry()

            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk06', 'IsCloseMessageDialog': True})
            Event65:
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk11'})
            goto Event40
          case 1:
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk10', 'IsCloseMessageDialog': True})
            goto Event65
          case 2:

            call HatenoMini_BlueFire.Explain_CherryChan()

            goto Event65
          case 3:
            Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk01', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Goodbye'})
        }
    } else {
        switch Npc_AncientDoctor_Hateno.CheckActorAction13() {
          case 0:
            Event25:
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_Clear_First'}) {
                if Npc_AncientDoctor_Hateno.IsOnInstEventFlag() {
                    Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk07', 'IsOverWriteLabelActorName': False})
                    goto Event36
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event30:
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk02', 'IsOverWriteLabelActorName': False})
                        goto Event36
                      case 1:
                        goto Event30
                      case 2:
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk09', 'IsOverWriteLabelActorName': False})
                        goto Event36
                      case 3:
                        Event31:
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk03', 'IsOverWriteLabelActorName': False})
                        goto Event36
                      case 4:
                        goto Event31
                      case 5:
                        Event32:
                        Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk04', 'IsOverWriteLabelActorName': False})
                        goto Event36
                      case 6:
                        goto Event32
                      case 7:
                        goto Event32
                    }
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor002_Clear_First', 'IsWaitFinish': True})
                Npc_AncientDoctor_Hateno.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:talk00', 'IsOverWriteLabelActorName': False})
                goto Event36
            }
          case 1:
            goto Event25
          case 2:
            goto Event25
          case 3:
            goto Event25
          case 4:
            goto Event25
          case 5:
            goto Event25
          case 6:
            goto Event25
          case 7:
            goto Event25
          case 8:
            goto Event25
          case 9:
            goto Event25
          case 12:
            goto Event25
          case 13:
            goto Event25
        }
    }
}
