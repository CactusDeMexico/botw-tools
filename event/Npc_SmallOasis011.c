-------- EventFlow: Npc_SmallOasis011 --------

Actor: Npc_SmallOasis011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckEquipArmorSeriesType', 'GeneralChoice2', 'CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis011_lady_first'}) {
            Event73:
            if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Step1'}) {
                    Event55:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis011_First'}) {
                        if Npc_SmallOasis011.IsOnInstEventFlag() {
                            Event43:
                            if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': True}) {
                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_003'})
                                Event12:
                                switch EventSystemActor.GeneralChoice3() {
                                  case 0:
                                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': True}) {
                                        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_015'})
                                        Event40:
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_018'})
                                            Event54:
                                            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_021'})
                                        } else {
                                            Event17:
                                            switch EventSystemActor.CheckTimeType() {
                                              case 0:
                                                Event13:
                                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_002'})
                                              case 1:
                                                Event21:
                                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_007'})
                                              case 2:
                                                goto Event21
                                              case 3:
                                                goto Event21
                                              case 4:
                                                goto Event13
                                              case 5:
                                                Event18:
                                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_006'})
                                              case 6:
                                                goto Event18
                                              case 7:
                                                goto Event18
                                            }
                                        }
                                    } else {
                                        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_008', 'IsCloseMessageDialog': True})
                                        goto Event40
                                    }
                                  case 1:
                                    Npc_SmallOasis011.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_001', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                    if !EventSystemActor.GeneralChoice2() {
                                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': True}) {
                                            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_019'})
                                            goto Event54
                                        } else {
                                            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_020'})
                                            goto Event54
                                        }
                                    } else {
                                        goto Event17
                                    }
                                  case 2:
                                    goto Event17
                                }
                            } else {
                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_017'})
                                goto Event12
                            }
                        } else {

                            call hello()

                            goto Event43
                        }
                    } else {

                        call hello()

                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis011_First', 'IsWaitFinish': True})
                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': True}) {
                            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_005'})
                            goto Event12
                        } else {
                            Npc_SmallOasis011.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_000', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event12
                        }
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis011_First'}) {
                        if Npc_SmallOasis011.IsOnInstEventFlag() {
                            Event70:
                            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_022'})
                            Event64:
                            switch EventSystemActor.GeneralChoice4() {
                              case 0:
                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_024', 'IsCloseMessageDialog': True})
                                Event67:
                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_025'})
                                goto Event64
                              case 1:
                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_027'})
                                goto Event67
                              case 2:
                                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_026'})
                                goto Event67
                              case 3:
                                goto Event17
                            }
                        } else {

                            call hello()

                            goto Event70
                        }
                    } else {

                        call hello()

                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis011_First', 'IsWaitFinish': True})
                        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_023'})
                        goto Event64
                    }
                }
            } else {
                goto Event55
            }
        } else {
            if Npc_SmallOasis011.IsOnInstEventFlag() {
                Event75:
                Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_009'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis011_lady_first', 'IsWaitFinish': True})
            } else {

                call hello()

                goto Event75
            }
        }
    } else {
        goto Event73
    }
}

void Electric_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_SmallOasis011.IsOnInstEventFlag() {
        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_011'})
    } else {

        call hello()

        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': True}) {
            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_016'})
        } else {
            Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_004'})
        }
    }
}

void Near() {
    Npc_SmallOasis011.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:near00'})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event34:
        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_012'})
      case 1:
        goto Event34
      case 2:
        Event35:
        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_013'})
      case 3:
        goto Event35
      case 4:
        goto Event35
      case 5:
        Event36:
        Npc_SmallOasis011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis011:Talk_014'})
      case 6:
        goto Event36
      case 7:
        goto Event36
    }
}

void Drag_Hero_Activated_Talk() {
    goto Event0
}
