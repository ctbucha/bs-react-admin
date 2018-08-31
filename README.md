# bs-react-admin
[BuckleScript](https://bucklescript.github.io/) bindings for [react-admin](https://github.com/marmelab/react-admin).

## Status

🚧 This is a WIP, not everything is supported yet. 🚧

Feel free to create an issue or PR if you find anything missing.

## Installation


```
npm install --save ctbucha/bs-react-admin
```

Then add `@ctbucha/bs-react-admin` to `bs-dependencies` in your `bsconfig.json`:

```
{
  ...
  "bs-dependencies": ["@ctbucha/bs-react-admin"]
}
```

## Usage

```reason
/* App.re */
let component = ReasonReact.statelessComponent("App");

let dataProvider = 
  BsRaDataJsonServer.getRaDataJsonServer(
    ~apiUrl="http://jsonplaceholder.typicode.com",
    (),
  );

let make = _children => { 
  ...component,
  render: _self => 
    BsReactAdmin.(
      <div>
        <Admin dataProvider=dataProvider>
          <Resource name="posts" list=PostList.toReactJs />
        </Admin>
      </div>
    ),  
    };
```

```reason
/* PostList.re */
let component = ReasonReact.statelessComponent("PostList");

let make = (props, _children) => { 
  ...component,
  render: _self => 
    BsReactAdmin.(
      <div>
        <List props>
          <Datagrid>
            <TextField source="id" />
            <TextField source="title" />
            <TextField source="body" />
          </Datagrid>
        </List>
      </div>
    ),
};

/* Need to pass this to Resource as a ReactJS component instead of a ReasonReact
 * component since react-admin handles this as a ReactJS component.
 */
let toReactJs = 
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps, [||]));
```
